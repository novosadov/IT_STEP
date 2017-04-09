#Автор Новосадов Павел

from random import shuffle

MIN_SHOE_LEN = 22
DECK_IN_SHOE = 2

def say_welcome(player="Player"):
    print("Привет %s добро пожаловать в нашу игру!" % player)


def init_round(rnd, balance):
    
    print("Добро пожаловать на уровень %s. Ваш баланс = %.2f" % (rnd, balance))


def init_shoe(num_decks=1):
    
    suits = ['ч', 'б', 'п', 'к']
    ranks = ['В', 'Д', 'К', 'Т'] + [str(i) for i in range(2, 11)]
    cards = [x + y for x in ranks for y in suits] * num_decks
    assert len(cards) == num_decks * 52
    shuffle(cards)
    print("Мешаем  карты. Удачи!" )
    return cards


def init_game():
    
    say_welcome()
    shoecards = init_shoe(num_decks=2)
    staring_balance = 100.0
    min_bet = 1.0
    return shoecards, staring_balance, min_bet


def draw_prompt():
    
    inp = ''
    while inp not in ('y', 'Y', 'N', 'n'):
        inp = input("Хотите взять ещё одну карту? (Y/N)? ")
    return inp.lower() == 'y'


def hand_score(hand):
   
    score = 0
    aces = 0
    for card in hand:
        if card[0].isdigit():
            score += int(card[:-1])
        elif card[0] in ('В', 'Д', 'К'):
            score += 10
        elif card[0] == 'Т':
            aces += 1
        else:
            assert False, "WTF ?"
    score += max([aces - 1, 0]) * 1 
    score += min([aces, 1]) * (1 if score >= 11 else 11)
    return score


def player_turn(hand, shoe):
    
    value = hand_score(hand)
    print("Ваш карты {} Ваши очки {}".format(hand, value))
    if value >= 21:
        return hand
    if draw_prompt():
        hand.append(shoe.pop())
        print("Вы тянете {}. Ваши карты: {}".format(hand[-1], hand))
        return player_turn(hand, shoe)
    return hand


def dealer_turn(hand, shoe):
    
    value = hand_score(hand)
    if value >= 16:
        return hand
    hand.append(shoe.pop())
    print("Диллер вытянул {}. Карты диллера: {}".format(hand[-1], hand))
    return dealer_turn(hand, shoe)


def player_won(bet, balance):
    balance += bet * 2
    print("Вы победили {}! Ваш баланс: {}".format(bet, balance))
    return balance


def player_lost(bet, balance):
    print("Вы проиграли {}! Ваш баланс: {}".format(bet, balance))
    return balance


def player_broke(rnd):
    print("Вы проиграли после {} уровня. До свидания!".format(rnd))


def draw(bet, balance):
    balance += bet
    print("Ничья. Ваш баланс: {}".format(bet, balance))
    return balance


def ask_for_bet(balance, min_bet):
   
    assert min_bet < balance, "У Вас нет достаточного количества денег, для игры"
    while True:
        print("Сколько будете ставить?")
        try:
            bet = input() 
            bet = float(bet)
            if bet > balance:  
                print("На Вашем счёте не достаточно средств")
            elif bet < 0:
                print("Отрицательные ставки запрещены!")
            else:
                balance -= bet
                print("Ставка  %.2f принята!" % bet)
                return bet, balance
        except ValueError:
            print("%s не верное число." % bet)


def check_outcome(phand, dhand, bet, balance):
    pscore = hand_score(phand)
    dscore = hand_score(dhand)
    if dscore > 21:
        balance = player_won(bet, balance)
    elif dscore == pscore:
        plen, hlen = len(phand), len(dhand)
        if dscore != 21:
            balance = draw(bet, balance)
        elif plen == 2:
            balance = player_won(bet, balance)
        elif hlen == 2:
            balance = player_lost(bet, balance)
        else:
            balance = draw(bet, balance)
    elif dscore > pscore:
        balance = player_lost(bet, balance)
    else:
        balance = player_won(bet, balance)
    return balance

def deal_cards(shoe):
    
    return [shoe.pop() for i in range(2)], [shoe.pop()]


# like main method is C#
if __name__ == "__main__":
    shoe, balance, min_bet = init_game()
    rnd = 0
    while balance > min_bet:
        rnd += 1
        init_round(rnd, balance)
        bet, balance = ask_for_bet(balance, min_bet)
        init_phand, init_dhand = deal_cards(shoe)
        player_hand = player_turn(init_phand, shoe)
        if hand_score(player_hand) > 21:
            balance = player_lost(bet, balance)
            continue
        else:
            dealer_hand = dealer_turn(init_dhand, shoe)
            balance = check_outcome(player_hand, dealer_hand, bet, balance)
        if len(shoe) < MIN_SHOE_LEN:
            shoe = init_shoe(DECK_IN_SHOE)

    player_broke(rnd)       
