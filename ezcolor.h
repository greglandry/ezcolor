#include "cybsp.h"
#include "cy_rgb_led.h"

typedef enum
{
  RED           = CY_RGB_LED_COLOR_RED,
  GREEN         = CY_RGB_LED_COLOR_GREEN,
  BLUE          = CY_RGB_LED_COLOR_BLUE,
  ORANGE        = (255 << CY_RGB_LED_RED_POS) | (5   << CY_RGB_LED_GREEN_POS) | (0   << CY_RGB_LED_BLUE_POS),
  PINK          = (255 << CY_RGB_LED_RED_POS) | (10  << CY_RGB_LED_GREEN_POS) | (30  << CY_RGB_LED_BLUE_POS),
  LIGHT_BLUE    = (173 << CY_RGB_LED_RED_POS) | (216 << CY_RGB_LED_GREEN_POS) | (230 << CY_RGB_LED_BLUE_POS)

} color_t;

cy_rslt_t init_colors( void );

void color( color_t color );
