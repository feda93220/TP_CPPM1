def turn(min_or_max):
    min = 1
    max = -1
    board_to_select = None

    for board in get_possible_boards():
        board_score = calculate_score(board)

        if min_or_max == "min" and board_score <= min:
            min = board_score
            board_to_select = board

        if min_or_max == "max" and board_score >= max:
            max = board_score
            board_to_select = board

    return board_to_select


def get_possible_boards():
    ...

def calculate_score(board):
    ...
