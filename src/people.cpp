#include <bits/stdc++.h>
#include "people.h"

void 
People::set_name(const std::string name){
  this->name = name;
}

void  
People::set_weight(const int weight){
  this->weight = weight;
}

void  
People::set_height(const double height){
  this->height = height;
}

std::string  
People::get_name(){
  return this->name;
}

int  
People::get_weight(){
  return this->weight;
}

double  
People::get_height(){
  return this->height;
}
