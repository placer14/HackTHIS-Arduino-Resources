/*
  Keyboard Tutorial
 HackTHIS: Arduino Workshop #4
 
 We will drive a Piezo element with a sound depending on which button
 gets pressed. We have the buttons layed out similarly to a musical keyboard.
 */

/* Melody
 * (cleft) 2005 D. Cuartielles for K3
 *
 * This example uses a piezo speaker to play melodies.  It sends
 * a square wave of the appropriate frequency to the piezo, generating
 * the corresponding tone.
 *
 * The calculation of the tones is made following the mathematical
 * operation:
 *
 *       timeHigh = period / 2 = 1 / (2 * toneFrequency)
 *
 * where the different tones are described as in the table:
 *
 * note 	frequency 	period 	timeHigh
 * c 	        261 Hz 	        3830 	1915 	
 * c#           277 Hz          3610    1805
 * d 	        294 Hz 	        3400 	1700 	
 * d#           311 Hz          3215    1608
 * e 	        329 Hz 	        3038 	1519 	
 * f 	        349 Hz 	        2864 	1432 	
 * f#           370 Hz          2703    1352
 * g 	        392 Hz 	        2550 	1275 	
 * g#           415 Hz          2410    1205
 * a 	        440 Hz 	        2272 	1136 	
 * a#           466 Hz          2146    1073
 * b 	        493 Hz 	        2028	1014	
 * C	        523 Hz	        1912 	956
 *
 * http://www.arduino.cc/en/Tutorial/Melody
 */

const int C = 0;
const int Cs = 1;
const int D = 2;
const int Ds = 3;
const int E = 4;
const int F = 5;
const int Fs = 6;
const int G = 7;
const int Gs = 8;
const int A = 10;
const int As = 11;
const int B = 12;

const int SPEAKER = 9;

void playTone(int hertz) {
  tone(SPEAKER, hertz, 100);
}
void playC() { playTone(261); }
void playCs() { playTone(277); }
void playD() { playTone(294); }
void playDs() { playTone(311); }
void playE() { playTone(329); }
void playF() { playTone(349); }
void playFs() { playTone(370); }
void playG() { playTone(392); }
void playGs() { playTone(415); }
void playA() { playTone(440); }
void playAs() { playTone(466); }
void playB() { playTone(493); }


void setup() {
  pinMode(C, INPUT);
  pinMode(Cs, INPUT); 
  pinMode(D, INPUT);
  pinMode(Ds, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(Fs, INPUT);
  pinMode(G, INPUT);
  pinMode(Gs, INPUT);
  pinMode(A, INPUT);
  pinMode(As, INPUT); 
  pinMode(B, INPUT);
}

void loop() {
  if (digitalRead(C) == LOW) {
     playC();
  }
 else if (digitalRead(Cs) == LOW) {
     playCs();
  }
 else if (digitalRead(D) == LOW) {
     playD();
  }
 else if (digitalRead(Ds) == LOW) {
     playDs();
  }
 else if (digitalRead(E) == LOW) {
     playE();
  }
 else if (digitalRead(F) == LOW) {
     playF();
  }
 else if (digitalRead(Fs) == LOW) {
     playFs();
  }
 else if (digitalRead(G) == LOW) {
     playG();
  }
 else if (digitalRead(Gs) == LOW) {
     playGs();
  }
 else if (digitalRead(A) == LOW) {
     playA();
  }
 else if (digitalRead(As) == LOW) {
     playAs();
  }
 else if (digitalRead(B) == LOW) {
     playB();
  }
  else { noTone(SPEAKER); }
}

