#define _CRT_SECURE_NO_WARNINGS

#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void welcome(void);
void print_game_menu(void);

int get_option(void);
int print_and_validate(int option);

void print_game_rules(void);

double get_bank_balance(void);

double get_wager_amount(void);
int check_wager_amount(double wager, double balance);

int roll_die(void);
void display_die(int die1, int die2);

int calculate_sum_dice(int die1_value, int die2_value);

int is_win_loss_or_point (int sum_dice);

int is_point_loss_or_neither(int sum_dice, int point_value);

int calculate_result(int number_rolls, int sum_dice, int point_value);

double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);

void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance);

void check_bank_balance(double bank_balance); 