//declaração de variáveis para números decimais
float sal_atual, novo_sal;

void setup() {
  // Configuração incial do sistema
  //Será executada apenas no ínicio

  sal_atual = 1200;

  //verificando o valor do salário com a condicional
  if (sal_atual <= 500 && sal_atual > 0) {  //início
    novo_sal = sal_atual * 1.2;
  }  //fim
  else if (sal_atual > 500) {
    novo_sal = sal_atual * 1.1;
  } else {
    novo_sal = 0;
  }

  //Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);
}

void loop() {
  // Código que será executado repetidamente
  // Serial.println("Hoje é o último dia de janeiro!!!");//Mostrar a frase no monitor
  if (novo_sal == 0) {
    Serial.print("Digite um salário válido!!!");
  }

  else {

    //Exibindo o novo salário
    Serial.print("Novo Salário: ");
    Serial.println(novo_sal);
    Serial.print("------------------------");
  }

  delay(1000);  //espera 1 segundo antes de seguir o loop
}
