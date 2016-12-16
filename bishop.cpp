#include "bishop.hpp"
#include "piece.hpp"
#include "position.hpp"
#include <cmath>
#include <sstream>
#include <iostream>
using std::stringstream;
using std::cout;


Bishop::Bishop(char color,int X,int Y):Piece(color,X,Y){
	//Se llama al constructor de la clase Piece
}
bool Bishop::isValidMove(Piece***board, Position destiny){

	int contadorY,contadorX;

	if ((this->position.getX()== destiny.getX()) || (this->position.getY()== destiny.getY())){
		//verifica que no se mueva a los lados ni verticalmente
		return false;
	}


	if (fabs(this->position.getY()-destiny.getY())==fabs(this->position.getX()-destiny.getX())){
		



	
		if (this->getColor() == 'B'){
			if(this->position.getY() > destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				

				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						var = false; //					
						
						if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
						}
					}						


				}
				return true;



			}else if(this->position.getY() > destiny.getY() && this->position.getX()<destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				

				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX++;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						var = false;	
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}
				}
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto alto y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				

				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY++;
						contadorX--;
						

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						var = false;	
					}					
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						
						var = false;
					}
				}
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()<destiny.getX()){
				// si la posicion esta en un punto alto y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				

				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY++;
						contadorX++;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='B'){
						var = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}

				}
				return true;
			}
		} else {
			//si el color de esta pieza es Negro

			if(this->position.getY() > destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				

				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						var = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}

				}
				return true;



			}else if(this->position.getY() > destiny.getY() && this->position.getX()<destiny.getX()){
				//si la posicion esta en un punto bajo y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();

				
				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					
					if (board[contadorY][contadorX] == NULL){
						contadorY--;
						contadorX++;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						var = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}

				}
				
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()>destiny.getX()){
				//si la posicion esta en un punto alto y se quiere mover a la izquierda
				contadorY=this->position.getY();
				contadorX=this->position.getY();

				
				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY++;
						contadorX--;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						var = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}

				}
				
				return true;

			}else if(this->position.getY() < destiny.getY() && this->position.getX()<destiny.getX()){
				// si la posicion esta en un punto alto y se quiere mover a la derecha
				contadorY=this->position.getY();
				contadorX=this->position.getY();
				
				bool var = true; // lo unico que este while ocupaba era una variable que lo controlara
				while(var){
					
					if (board[contadorY][contadorX] == NULL){
						contadorY++;
						contadorX++;

					} else if (board[contadorY][contadorX]!=NULL && board[contadorY][contadorX]->getColor()=='N'){
						var = false;
					}
					if(contadorX == destiny.getX() || contadorY==destiny.getY()){
						var = false;
					}

				}
				return true;
			}

		}
		
	}else{
		return false;
	}








}

bool Bishop::moveTo(Piece*** board, Position destiny){
	if(isValidMove(board,destiny)){
		board[position.getY()][position.getX()] = NULL;
		position = destiny;
		board[position.getY()][position.getX()] = this;
		return true;
	}
	else{
		cout << "Invalid move" << endl;
		return false;
	}
}

string Bishop::toString()const{
	stringstream ss;
	if (color == 'N'){
		ss << "A";
	}
	else{
		ss << "a";
	}
	return ss.str();
}


