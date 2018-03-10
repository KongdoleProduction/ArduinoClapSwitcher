[![](https://github.com/KongdoleProduction/ArduinoClapSwitcher/blob/master/thumbnail.png)](https://www.youtube.com/watch?v=AiSzgrxgF_A)

# Clap Light Switcher

## Usage(사용법)
1. 우측 상단의 초록색 `clone or download` 버튼을 눌러 ZIP파일 다운로드!
1. `clap_switcher.ino` 파일을 아두이노 IDE로 열어주세요.
1. 아두이노를 PC에 연결하고 업로드 버튼 클릭~!

## Calibration(조정 방법)
* 박수소리에 너무 민감하게 반응한다면 `sensor_threshold_high`을 더 높은 값으로 수정해주세요.
* 서보가 너무 적게, 혹은 많이 돈다면 `servo_on`과 `servo_off` 값을 수정해주세요.
* 박수를 쳤는데 서보가 제대로 작동하지 않으면 `servo_on_time`을 더 높은 값으로 수정해주세요.

## Materials(재료)
이름 | 역할
--- | ---
[아두이노 나노](http://mechasolution.com/shop/goods/goods_view.php?goodsno=539798&category=117001002) | 프로그램을 실행시킬 수 있는 초소형 컴퓨터
[마이크로폰 앰프 모듈](http://mechasolution.com/shop/goods/goods_view.php?goodsno=539835&category=129021) \* | 소리를 아날로그 신호로 출력
[M-M 점퍼와이어](http://mechasolution.com/shop/goods/goods_view.php?goodsno=9681&category=136002) | 서보와 아두이노를 연결해주는 전선
[마이크로 서보](http://mechasolution.com/shop/goods/goods_view.php?goodsno=71795&category=) | 전등 스위치를 누르거나 당겨주는 역할

\* 다른 아날로그 앰프 모듈을 써도 괜찮습니다.


## Wiring Diagram(배선도)

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

