#include <iostream>
#include"sculptor.hpp"

using namespace std;

int main() {
  // EXEMPLO **************************************************

  Sculptor exemplo(50, 50, 50);//geracao de matriz
  
 //implementacao de elipsoide
  exemplo.setColor(0.021, 0.37, 0.23, 0.9); 
  exemplo.putEllipsoid(5, 23, 16, 5, 5, 7);
  exemplo.cutEllipsoid(0, 15, 0, 5, 2, 3); //cortar elipsoide
  
  //implementacao do cubo
  exemplo.setColor(0, 0, 0, 0.9); 
  exemplo.putBox(0, 7, 1, 7, 0, 7);
  exemplo.cutBox(4, 7, 4, 7, 0, 7); //cortar cubo

  //implementacao de esfera
  exemplo.setColor(1, 1, 1, 0.9);
  exemplo.putSphere(15, 15, 15, 7);
  exemplo.cutSphere(12, 15, 12, 4); //cortar esfera


  cout << "O ARQUIVO exemplo.off FOI CRIADO!" << endl;
  
  exemplo.writeOFF("exemplo.off"); //geracao do arquivo


  //***************************************************************

  // Sculptor *****************************************************
  Sculptor pandaHead(30, 30, 30); // Cria um escultor 3D com dimensões 30x30x30
  
  // Desenha a cabeça do panda
  pandaHead.setColor(1, 1, 1, 1); // Define a cor branca
  //pandaHead.putSphere(15, 15, 15, 14); //13 Desenha uma esfera para a cabeça
  pandaHead.putEllipsoid(15, 15, 15, 14, 10, 14);
  // Corta parte da Cara do Panda
  pandaHead.cutBox(0, 29, 0, 29, 27, 29);
    
  // Desenha as orelhas
  pandaHead.setColor(0, 0, 0, 1); // Define a cor preta
  pandaHead.putEllipsoid(5, 23, 16, 5, 5, 7); // Desenha a primeira orelha
  pandaHead.putEllipsoid(25, 23, 16, 5, 5, 7); // Desenha a segunda orelha
  
  // Desenha os olhos
  pandaHead.setColor(0, 0, 0, 1); // Define a cor preta
  //pandaHead.putSphere(27, 15, 16, 4); // Desenha o olho esquerdo
  //pandaHead.putSphere(27, 15, 18, 4); // Desenha o olho direito
  pandaHead.putBox(18, 23, 14, 18, 26, 26); // Desenha o olho direito
  pandaHead.putBox(7, 12, 14, 18, 26, 26); // Desenha o olho direito
    
  pandaHead.setColor(1, 1, 1, 1); // Define a cor branca
  // E
  pandaHead.putBox(7, 7, 17, 18, 26, 26);
  pandaHead.putVoxel(8, 18, 26);
  pandaHead.putVoxel(9, 17, 26);
  pandaHead.putVoxel(12, 18, 26);
  pandaHead.putVoxel(12, 14, 26);
  //D
  pandaHead.putBox(23, 23, 17, 18, 26, 26);
  pandaHead.putVoxel(22, 18, 26);
  pandaHead.putVoxel(21, 17, 26);
  pandaHead.putVoxel(18, 18, 26);
  pandaHead.putVoxel(18, 14, 26);
  
  // Desenha o nariz
  pandaHead.setColor(0, 0, 0, 1); // Define a cor preta
  //pandaHead.putSphere(15, 8, 27, 1); // Desenha o nariz
  pandaHead.putBox(14, 16, 14, 14, 26, 26);
  pandaHead.putBox(15, 15, 12, 13, 26, 26);
  
  // Desenha a boca
  pandaHead.putBox(13, 17, 11, 11, 26, 26);
  pandaHead.putVoxel(12, 12, 26);
  pandaHead.putVoxel(18, 12, 26);
  pandaHead.setColor(1, 1, 1, 1); // Define a cor branca
  pandaHead.putVoxel(15, 11, 26);
  
  // Desenha Corado (255,182,193)
  pandaHead.setColor(1, 0.7, 0.76, 1);
    //E
  pandaHead.putEllipsoid(7, 12, 26, 2, 2, 0);
  pandaHead.cutVoxel(7, 10, 26);
    //D
  pandaHead.putEllipsoid(23, 12, 26, 2, 2, 0);
  pandaHead.cutVoxel(23, 10, 26);
  
  cout << "O ARQUIVO cabeça_panda.off FOI CRIADO!" << endl;
  
  pandaHead.writeOFF("cabeça_panda.off"); // Salva o arquivo com a cabeça do panda
  

  cout << "Desenho em 3D concluido!";
  return 0;
}