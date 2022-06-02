#ifndef INCLUDE_CROUPIER_HPP_
#define INCLUDE_CROUPIER_HPP_

class Croupier
{
public:
	void add_money(double added) {money_on_table_ = added;}
	void give_card() {croupier_cards_.push_back(Card);}
	void show_second() {std::cout<< cruupier_cards_[1] << std::endl;}
	bool has_ace_as_first();
private:
	double money_on_table_
	double sum_ = 0
	std::vector<Cards> croupier_cards_
};

#endif /*INCLUDE_CROUPIER_HPP_