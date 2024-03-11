//*Declaração das variáveis / números Reais*/
float salario, novosalario;

void setup() {
  // Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);

  delay(1000); //Espera estrategica 

}

void loop() {
  
  Serial.print("Digite o salario: ");
  while(Serial.available() == 0){
    //Aguarde a entrada de valores do usuário
  }

  //Lê o valor do serial e guarda na varável salario
  salario = Serial.parseFloat();
  Serial.println(salario);

  //Cálculo do novo salário:
  novosalario = salario + (salario * 25/100);

  //Exibe o valor do novo salário
  Serial.print("O novo salario: ");
  Serial.println(novosalario);
  delay(1000);

}
