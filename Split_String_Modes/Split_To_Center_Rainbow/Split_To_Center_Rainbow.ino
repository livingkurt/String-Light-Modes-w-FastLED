#include <FastLED.h>
#define LED_PIN 5
#define NUM_LEDS 100
#define BRIGHTNESS 255
#define LED_TYPE WS2811
#define COLOR_ORDER RGB
#define RATE 10
#define GAP 10
CRGB leds[NUM_LEDS];

int start_hue;
int delta_hue;
int h = 0;
int j = 0;

void setup()
{
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
    Serial.begin(9600);
    // FastLED.clear();
    // FastLED.show();
}

void loop()
{

    // start_hue = -1 * millis() / RATE;
    // delta_hue = 20;

    // fill_rainbow(leds, NUM_LEDS, start_hue, delta_hue);
    // FastLED.show();
    // Serial.println(millis())

    // start_hue = -1*millis()/RATE;

    // for (int i = 0; i < 50; i++) {
    //     // led[i] = CHSV()
    //   fill_rainbow( leds, 50, i, delta_hue);

    // //   delay(GAP);
    // }
    // FastLED.show();
    // for (int i = 49, j = 50; i >= 0, j <= 100; i--, j++)
    // {
    //     h = h + 1;
    //     leds[i] = CHSV(h, 255, 255);
    //     leds[j] = CHSV(h, 255, 255);

    //     // delay(GAP);
    //     Serial.println(h);
    //     FastLED.show();
    // };
    // for (int i = 0; i < NUM_LEDS / 2; i++)
    // {
    //     leds[NUM_LEDS - i - 1] = leds[i];
    //     FastLED.show();
    // }

    // for (uint8_t i = 0; i < NUM_LEDS; i++)
    // {

    //     //do something to assign colors to the pixels
    //     leds[i] = CHSV(random8(); 255, 255);

    //     //copy data from first section to second section
    //     leds[i + NUM_LEDS] = leds[i];

    //     //copy data from first section to third section
    //     leds[i + (2 * NUM_LEDS)] = leds[i];
    // }

    // FastLED.show();
    // for (int i = 0; i < 100; i++)
    // {

    delta_hue = 2;
    start_hue = -1 * millis() / RATE;
    for (int i = 0; i < NUM_LEDS / 2; i++)

    {
        leds[i] = CHSV(start_hue, 255, 255);
        leds[NUM_LEDS - 1 - i] = CHSV(start_hue, 255, 255);
        start_hue += delta_hue;
    };
    // };
    FastLED.show();

    // for (int i = 0; i < 50; i++)
    // {
    //     // h = h + 1;
    //     // Set the i'th led from start
    //     // leds[i] = CHSV(h, 255, 255);
    //     // Set the i'th led from end
    //     // leds[NUM_LEDS - 1 - i] = CHSV(h, 255, 255);
    //     // Show the leds

    //     // now that we've shown the leds, reset the i'th led to black
    //     // leds[i] = CRGB::Black;
    //     // leds[NUM_LEDS - 1 - i] = CRGB::Black;
    //     // FastLED.show();
    //     // Wait a little bit before we loop around and do it again

    //     // FastLED.show();
    //     // delay(30);
    //     // CHSV hsv;
    //     // hsv.hue = initialhue;
    //     // hsv.val = 255;
    //     // hsv.sat = 255;
    //     delta_hue = 5;
    //     start_hue = -1*millis()/RATE;
    //     for (int i = 0; i < 50; i++)

    //     {
    //         leds[i] = CHSV(start_hue, 255, 255);
    //         leds[NUM_LEDS - 1 - i] = CHSV(start_hue, 255, 255);
    //         start_hue += delta_hue;

    //     };
    //     // FastLED.delay(100);
    // };

    // // for (int i = 50; i <= 100; i++)
    // // {
    // //     j = j + 1;
    // //     leds[i] = CHSV(j, 255, 255);
    // FastLED.show();
    //     delay(GAP);
    //     Serial.println(j);
    // };
    // FastLED.show();
    // for (int i = 99; i > 50; i++)
    // {
    //     j = j - 1;
    //     leds[i] = CHSV(j, 255, 255);
    //     FastLED.show();
    //     delay(GAP);
    // }

    //  delay(RATE);
    // FastLED.show();
    // delay(RATE);
    // for (int i = 0; i < 255; i++) {
    //   fill_rainbow( leds, NUM_LEDS, i, delta_hue );
    //   FastLED.show();
    // }
}

// void mirror2ndHalf()
// {
//     //copy and mirror pixel data from leds_temp to leds array.

//     if (gReverseDirection == false)
//     { //false is center outward
//         for (uint8_t i = 0; i < NUM_LEDS / 2; i++)
//         {
//             leds[(NUM_LEDS / 2) - 1 - i] = leds_temp[i];
//             leds[(NUM_LEDS / 2) + i] = leds_temp[i];
//         }
//     }
//     else
//     { //true is from ends inward
//         for (uint8_t i = 0; i < NUM_LEDS / 2; i++)
//         {
//             leds[i] = leds_temp[i];
//             leds[(NUM_LEDS - 1) - i] = leds_temp[i];
//         }
//     }

// } //end_mirror2ndHalf
