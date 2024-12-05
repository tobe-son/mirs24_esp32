#define PIN_ENC_A_L 39
#define PIN_ENC_B_L 36
#define PIN_ENC_A_R 35
#define PIN_ENC_B_R 34

//足回り用モータードライバー用
#define PIN_DIR_R   25
#define PIN_PWM_R   26
#define PIN_DIR_L   32
#define PIN_PWM_L   33

#define PIN_BATT_1  27
#define PIN_BATT_2  28

#define ROS_DOMAIN_ID 90

//足回り速度制御用
double RKP = 80.0;
double RKI = 30.0;
double RKD = 8.0;
double LKP = 100.0;
double LKI = 30.0;
double LKD = 8.0;

//車体数値
#define COUNTS_PER_REV    4096.0
double WHEEL_RADIUS = 0.04;  //ホイール径
double WHEEL_BASE = 0.38;  //車輪間幅

// PWM設定
const int32_t r_Channel = 0;        // PWMチャンネル
const int32_t l_Channel = 1;
const int32_t pwmFrequency = 5000; // PWM周波数 (5kHz)
const int32_t pwmResolution = 8;   // PWM分解能 (8ビット = 0-255)