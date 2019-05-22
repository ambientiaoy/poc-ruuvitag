/**
 * Ruuvi Firmware 3.x Acceleration tasks.
 *
 * License: BSD-3
 * Author: Otso Jousimaa <otso@ojousima.net>
 **/

#ifndef  TASK_ACCELERATION_H
#define  TASK_ACCELERATION_H

#include "ruuvi_boards.h"
#include "ruuvi_interface_acceleration.h"
#include "ruuvi_driver_error.h"
#include "ruuvi_driver_sensor.h"
#include "ruuvi_interface_log.h"

#define TASK_ACCELERATION_X_INDEX 0
#define TASK_ACCELERATION_Y_INDEX 1
#define TASK_ACCELERATION_Z_INDEX 2

typedef struct __PACKED__
{
  int8_t accx;
  int8_t accy;
  int8_t accz;
}task_acceleration_data_t;

/**
 * Auto-detects and initializes acceleration sensor in low-power state
 * Reads supported sensors from board.h and tries to initialize them.
 * Configures the sensor according to defaults in application_config.h
 */
ruuvi_driver_status_t task_acceleration_init(void);

/**
 * Prints Acceleration data to log at given severity
 */
ruuvi_driver_status_t task_acceleration_data_log(const ruuvi_interface_log_severity_t
    level);

/**
 * Get latest sample from the sensor. Remember to trigger sampling in case you're in single-shot mode
 */
ruuvi_driver_status_t task_acceleration_data_get(ruuvi_interface_acceleration_data_t*
    const data);

/**
 * Get acceleration data and print it on console.
 */
ruuvi_driver_status_t task_acceleration_on_button(void);

/**
 * Get number of movement counts
 */
ruuvi_driver_status_t task_acceleration_movement_count_get(uint8_t* const count);

ruuvi_driver_status_t task_acceleration_p2p_get(ruuvi_interface_acceleration_data_t* const data);

ruuvi_driver_status_t task_acceleration_rms_get(ruuvi_interface_acceleration_data_t* const data);

ruuvi_driver_status_t task_acceleration_dev_get(ruuvi_interface_acceleration_data_t* const data);

void task_acceleration_enter_measuring(void* p_event_data, uint16_t event_size);

void task_acceleration_get_samples(task_acceleration_data_t** p_event_data, size_t* nsamples);
#endif