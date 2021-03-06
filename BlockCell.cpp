#include <iostream>
using namespace std;
#include"BlockCell.h"

BlockCell::BlockCell():cellPointer(NULL),nextBlock(NULL){}

BlockCell::BlockCell(Cell* c):cellPointer(c),nextBlock(NULL){}

BlockCell* BlockCell::getNextBlock()const{ return nextBlock;}
Cell* BlockCell::getCellPointer()const{ return cellPointer;}

void BlockCell::setNextBlockCell(BlockCell* BC){nextBlock=BC;}
void BlockCell::setCellPointer(Cell* cell){ cellPointer=cell;}

void BlockCell::setEtatCell(int etat){
  getCellPointer()->setEtat(etat);
}

int BlockCell::getEtatCell()const{
  return getCellPointer()->getEtat();
}

int BlockCell::getCellNum()const{
  return getCellPointer()->getCellNum();
}

void BlockCell::printBlock()const{
  cout<<" => etat de cell : " <<getEtatCell()<<"/==/ Num= "<<getCellNum()<<"\t";
  getCellPointer()->print();
}

void BlockCell::printBlockListe()const{
  getCellPointer()->print();
}
