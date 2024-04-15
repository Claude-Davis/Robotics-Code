#include <iostream>
using namespace std;

class Robot {
    private:
        int camera_pin;
        int mic_pin;
        int light_sensor_pin;
        int accelerometerX_pin;
        int accelerometerY_pin;
        int accelerometerZ_pin;

    public:
        Robot(int camPin, int micPin, int lightPin, int accelXPin, int accelYPin, int accelZPin): camera_pin(camPin), mic_pin(micPin), light_sensor_pin(lightPin), accelerometerX_pin(accelXPin), accelerometerY_pin(accelYPin), accelerometerZ_pin(accelZPin) {
            pinMode(camera_pin, INPUT); //set camera pin as input
            pinMode(mic_pin, INPUT); //set microphone pin as input
            pinMode(light_sensor_pin, INPUT); //set light sensor pin as input 
            pinMode(accelerometerX_pin, INPUT); //set accelereometer X pin as input
            pinMode(accelerometerY_pin, INPUT); //set accelerometer Y as input
            pinMode(accelerometerZ_pin, INPUT); //set accelerometer Z as input 
        }

        int readCamera() {
            return digitalRead(camera_pin); //read value from camera pin
        }

        int readMicrophone() {
            return digitalRead(mic_pin); //read value from microphone pin
        }

        bool readLightSensor() {
            return digitalRead(light_sensor_pin); //read value from light sensor pin
        }

        int readAccelerometerX() {
            return digitalRead(accelerometerX_pin); //read value from accelerometer X pin
        }

        int readAccelerometerY() {
            return digitalRead(accelerometerY_pin); //read value from accelerometer Y pin
        }

        int AccelerometerZ() {
            return digitalRead(accelerometerZ_pin); //read value from accelerometer Z pin
        }

        bool detectLightLevel() {
            int light_value = readLightSensor();
            if (light_value <= 100) { //light measured in lumens
                return true;
            }
            else {
                return false;
            }
        }

        bool detectColor(const char* color) {
            const char* Colors[] = {"Red", "Yellow", "Purple", "Blue", "Green", "Black", "Brown"};
            for (const auto& c : Colors) {  //loop through the array to check if the detected color matches
                if (strcmp(color, c) == *c) {
                    cout << color << endl;
                    return true;
                }
            }
            cout << "Unknown Color" << endl; 
            return false;
        }
};
