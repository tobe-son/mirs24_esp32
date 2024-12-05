# mirs24_esp32

ESP32を用いた2024年mirs標準機用プログラムです。
micro-rosを用いて他コンピュータと通信を行います。

*※各班開発者へ*\
*mainへの直接pushは禁じています。開発用ブランチを立てて、pull requestを出してください*\
*カスタマイズするなら個人または団体のアカウントでforkしてください*

## 使用方法
このリポジトリと使用するライブラリのダウンロード
```bash
git clone https://github.com/mirs240x/mirs24_esp32.git
git clone https://github.com/mirs240x/micro_ros_arduino_mirs240x.git
```

## 詳細
### 内部ファイルの詳細

| ファイル | 機能概要 |
| :---: | --- |
| `mirs24_esp32` | setup関数とloop関数の実行 |
| `config.h` | 設定・定数関連 |
| `encoder` | エンコーダーの読み取り |
| `vel_ctrl` | 速度制御 |
| `vel_pub` | 速度計算 |
| `vlt_observer` | 電圧監視 |
| `ros_setup` | micro-rosに関わる諸々の設定や宣言 |
| `pubsub_callback` | publisher/subscliberに関するコールバック関数置き場 |
| `server_callback` | server/clientに関するコールバック置き場 |


### topic詳細

#### publish

| topic | 概要 | 型 |
| --- | --- | --- |
| `/encoder` | エンコーダーのカウント値 | std_msgs/msg/Int32MultiArray |
| `/vlt` | バッテリー電圧 | std_msg/msg/Float64MultiArray |
| `/vel` | 左右の移動速度 | std_msgs/msg/Float64MultiArray |

#### subscribe

| topic | 概要 | 型 |
| --- | --- | --- |
| `/cmd_vel` | 速度指令値 | geometry_msgs/msg/Twist |
| `/params` | パラメーター | mirs_msgs/msg/BasicParam | 

