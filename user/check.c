
uint8_t vl53l5cx_check_data_ready(
		VL53L5CX_Configuration		*p_dev,
		uint8_t				*p_isReady)
{
	uint8_t status = VL53L5CX_STATUS_OK;

	status |= RdMulti(&(p_dev->platform), 0x0, p_dev->temp_buffer, 4);

	if((p_dev->temp_buffer[0] != p_dev->streamcount)
			&& (p_dev->temp_buffer[0] != (uint8_t)255)
			&& (p_dev->temp_buffer[1] == (uint8_t)0x5)
			&& ((p_dev->temp_buffer[2] & (uint8_t)0x5) == (uint8_t)0x5)
			&& ((p_dev->temp_buffer[3] & (uint8_t)0x10) ==(uint8_t)0x10)
			)
	{
		*p_isReady = (uint8_t)1;
		 p_dev->streamcount = p_dev->temp_buffer[0];
	}
	else
	{
        if ((p_dev->temp_buffer[3] & (uint8_t)0x80) != (uint8_t)0)
        {
        	status |= p_dev->temp_buffer[2];	/* Return GO2 error status */
        }

		*p_isReady = 0;
	}

	return status;
}

