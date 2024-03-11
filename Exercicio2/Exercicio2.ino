//*Declaração das variáveis / números Reais * /
float salario, percentual, aumento, novosalario;

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

  Serial.println("Digite o percentual: ");
  while (Serial.available() == 0) {
    //Aguarda a entrada do percentual
  }
  percentual = Serial.parseFloat();
  Serial.println(percentual);

  //Cálculo do aumento:
  aumento = salario + (percentual/100);

  //Exibe o valor do aumento
  Serial.print("O aumento foi: ");
  Serial.println(aumento);
  delay(1000);

  //Cálculo do novo salário
  novosalario = (salario + aumento);

  //Exibe o valor do novo salário
  Serial.print("O novo salario é: ");
  Serial.println(novosalario);
  delay(1000);


}
