// コードを入力してください
#ifndef LED_CONTROLLER_H
#define LED_CONTROLLER_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>

void led_init(void);
void led_on(void);
void led_off(void);
bool led_get_state(void);

#ifdef __cplusplus
}
#endif

#endif // LED_CONTROLLER_H