#include "services.h"

std::string name_list[71] = {"André","Adriana","Adriano","Alisson","Bruno","Bruna",
                            "Caio","Catarina","Camila","Daniela","Danilo","Elton",
                            "Emerson","Emily","Fabiana","Fabiano","Fabiola","Felipe",
                            "Fagner","Gabriel","Gabriela","Helen","Isabel","Isabele",
                            "Isabela","Igor","Iago","João","Jaqueline","Jorge","José",
                            "Katarine","Kleber","Karine","Larissa","Luciana","Luciano",
                            "Leticia","Lucas","Maria","Matheus","Marcos","Marcelo","Marcela",
                            "Maicon","Michael","Monique","Nathalia","Nicolas","Patricia",
                            "Patrick","Pamela","Raissa","Rodinei","Roberto","Rodrigo","Tais",
                            "Tamara","Tulio","Vitor","Vinicius","Valter","Vitoria","Vanessa",
                            "Wesley","Walter","Wendel","William","Weber","Yan","Zilma"};

std::string surname_list[81] = { "Alves","Abreu","Almeida","Amorim","Araujo","Brito","Borges",
                                "Braga","Bernardes","Barros","Campos","Carvalho","Correa","Cabral",
                                "Cardoso","Costa","Dantas","da Silva","de Abreu","de Souza","Esteves",
                                "Ferreira","Faria","Fonsceca","Fagundes","Guerra","Gomes","Garcia",
                                "Graça","Jacinto","Klein","Lourenço","Lima","Lopes","Leite","Lacerda",
                                "Lago","Machado","Marinho","Mesquita","Magalhães","Muniz","Mendonça",
                                "Meira","Meireles","Nogueira","Noronha","Novaes","Neves","Neto","Nunes",
                                "Oliveira","Pereira","Pacheco","Paes","Paiva","Passos","Pessoa","Pires",
                                "Pinheiro","Prado","Pontes","Porto","Rios","Rosa","Rossi","Rabelo","Ramos",
                                "Rodrigues","Sales","Santos","Silva","Souza","Siqueira","Toledo","Viana",
                                "Vieira","Vaz","Vasconcelos","Xavier","Zanetti"};

People*
Services::generate(int length){
  People* peoples = new People[length];
  for(int i = 0; i < length; i++){
    peoples[i].set_name(generate_name());
    peoples[i].set_height(generate_height());
    peoples[i].set_weight(generate_weight());
  }
  return peoples;
}

int
Services::generate_height(){
  int minimum_height = 120;
  int range_height = 100;
  int height = rand() % range_height + minimum_height;
  return height;
}

double
Services::generate_weight(){
  double minimum_weight = 40.0;
  double maximum_weight = 120.0;
  double weight = (maximum_weight - minimum_weight) * ( (double)rand() / (double)RAND_MAX ) + minimum_weight;
  return weight;
}

std::string
Services::generate_name(){
  int name_random_index = rand() % 70;
  int surname_random_index = rand() % 80;
  std::string name = name_list[name_random_index] + " " + surname_list[surname_random_index];
  return name;
}

void
Services::print_peoples(People peoples[], int length){
  std::cout << std::setw(22) << "Name" << " | " << std::setw(5) <<"Weight(Kg)" << " | " << std::setw(5) << "Height(cm)" << std::endl;
  for(int i = 0; i < length; i++){
      std::cout << std::setw(21) << peoples[i].get_name() << "  | ";
      std::cout << std::setw(10) << peoples[i].get_weight() << " | ";
      std::cout << std::setw(5) << peoples[i].get_height() << std::endl;
  }
}
