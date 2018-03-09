![](https://github.com/KongdoleProduction/ArduinoClapSwitcher/blob/master/thumbnail.png)

# Clap Light Switcher

## Usage(사용법)
우측 상단의 초록색 버튼을 눌러 ZIP파일 다운로드 후 아두이노 IDE로 열어서 보드에 업로드해주세요.

## Calibration(조정 방법)
박수소리에 너무 민감하게 반응한다면 `sensor_threshold_high`을 더 높은 값으로 수정해주세요.
서보가 너무 적게, 혹은 많이 돈다면 `servo_on`과 `servo_off` 값을 수정해주세요.
박수를 쳤는데 서보가 제대로 작동하지 않으면 `servo_on_time`을 더 높은 값으로 수정해주세요.

## Wiring Diagram

Arduino | Servo
--- | ---
digital pin 2 | yellow
Vcc | red
Gnd | brown

Arduino | Microphone Module
--- | ---
analog pin 0 | Vcc
analog pin 1 | Gnd
analog pin 2 | Vout

