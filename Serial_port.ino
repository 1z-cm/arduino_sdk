void setup() {
  Serial.begin(9600);       // 初始化串口通信，波特率9600
  while (!Serial);          // 等待串口连接（仅需在部分开发板启用）
  Serial.println("www.sparkleiot.com");  // 打印目标内容并换行
  Serial.println("github:");
  Serial.println("Arduino:");
}

void loop() {
  // 空循环（不需要重复执行）
}