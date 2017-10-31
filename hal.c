#include "hal.h"

#include <stdio.h>

void coolant_sync(uint8_t mode) {};
void spindle_sync(uint8_t state, float rpm) {};
// Initialize the limits module
void limits_init() {};
// Check for soft limit violations
void limits_soft_check(float *target) {};

// Prints system status messages.
void report_status_message(uint8_t status_code) {};

// Prints miscellaneous feedback messages.
void report_feedback_message(uint8_t message_code) {};

// Prints Grbl global settings
void report_grbl_settings() {};

void st_update_plan_block_parameters() {};

void consume_output() {
  // Gets the current block. Returns NULL if buffer empty
  plan_block_t *pb = plan_get_current_block();

  if (pb) {
  	printf("%d\n", pb->steps[0]);
    plan_discard_current_block();
  }
};

system_t sys;
int32_t sys_position[N_AXIS];   