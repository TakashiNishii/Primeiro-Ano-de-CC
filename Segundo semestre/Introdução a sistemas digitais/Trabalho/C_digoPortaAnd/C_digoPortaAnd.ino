//Estou criando as variaveis para receber os valores das portas onde os componentes dos projetos estão conectados: 
int pinoLedV = 2;
int pinoLedF = 5;
int botao1 = 3; 
int botao2 = 4;

void setup() {
  // Aqui configuramos os componentes do projeto:
  pinMode (pinoLedV, OUTPUT);
  pinMode (pinoLedF, OUTPUT);
  pinMode (botao1, INPUT);
  pinMode (botao2, INPUT);
}

void loop() {
  /* Aqui é o código que vai ficar rolando no arduino a função loop() corresponde ao main dos
    algoritmos que estamos acostumados em sala, a diferença é que nessa função o código fica
    repetindo para sempre: 
  */
  //---------------------------Inicio do código---------------------------
  /*  As duas variaveis booleanas criados a seguir recebe o valor verdadeiro ou falso dos botões para
    isso usamos a função de leitura de componentes digitais do Arduino (a função digitalRead()), temos
    nesse processo o valor Verdadeiro como botão pressionado: 
  */
  boolean A = digitalRead (botao1);
  boolean B = digitalRead (botao2);

  // Aqui fazemos a comparação dos botões representando a porta "E"/"And":
  if (A&&B){
    digitalWrite(pinoLedV, HIGH); // Se o valor da comparação for verdadeiro o led irá receber o valor HIGH, ou seja, o led acende.
    digitalWrite(pinoLedF, LOW);
  }else{
    digitalWrite(pinoLedV, LOW); // Se o valor da comparação for falso o led irá receber o valor LOW, ou seja, o led apaga.
    digitalWrite(pinoLedF, HIGH);
  }
  delay(200); //Aqui coloco um pequeno delay de 200 milisegundos para que o tempo de resposta do arduino seja melhor e que seja visivel os resultados da operação.
}
