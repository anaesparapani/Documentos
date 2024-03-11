//*Declaração das variáveis / números Reais */
float salario, salreceber, gratificacao, imposto;


void setup() {
  // Inicia a comunicação com o Serial Monitor 
  Serial.begin(9600);

  delay(1000);

}

void loop() {
  Serial.print("Digite o salario: ");
  while(Serial.available() == 0){
    //Aguarde a entrada de valores do usuário
  }
  //Lê o valor do serial e guarda na variável salario
  salario = Serial.parseFloat();
  Serial.println(salario);

  //cáculo da gratificação
  gratificacao = salario * 5/100;

  //Exibe o valor da gratificação
  Serial.print("A gratificacao foi: ");
  Serial.println(gratificacao);
  delay(1000);

  //cálculo do imposto
  imposto = salario * 7/100;

  //Exibe o valor do imposto
  Serial.print("O imposto foi: ");
  Serial.println(imposto);
  delay(1000);

  //cálculo do salário a receber
  salreceber = salario + gratificacao - imposto;

  //Exibe o valor do salário a receber 
  Serial.print("O salario a receber é: ");
  Serial.println(salreceber);
  delay(1000);



}
