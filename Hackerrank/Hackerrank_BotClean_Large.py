

def next_move(posx, posy, dimx, dimy, board):
    '''
    purpose: Determine next move to get agent closer to target
    '''

    # agent position
    agent = [posx, posy]

    # target position (aka final_target)
    # calculate the next target to clean
    counter = 0
    min_dist = 99999
    final_target = []
    for row in board:

        if row.count('d') > 1:
            for i in range(row.index('d'), len(row)):
                    if row[i] == 'd':
                        target = [counter, i]
                        dist = physical_distance(agent, target)
                        if dist < min_dist:
                            min_dist = dist
                            final_target = target

        elif row.count('d') == 1:
            target = [counter, row.index('d')]
            dist = physical_distance(agent, target)
            if dist < min_dist:
                min_dist = dist
                final_target = target
            
        counter += 1


    # move agent to target
    if agent != final_target:
        direction = move(agent, final_target)
        print(direction)

    elif agent == final_target:
        print('CLEAN')


def physical_distance(agent, target):
    '''
    purpose: Physical distance between the agent and target, limited to movements of UP, DOWN, LEFT & RIGHT

    params
    agent: [x, y] coord pair of agents current position
    target: [x, y] coord pair of target position
    '''
    return (abs(agent[0]-target[0]) + abs(agent[1]-target[1]))


def move(agent, target):
    '''
    purpose: Move agent 1 step closer to target

    params
    agent: [x, y] coord pair of agents current position
    target: [x, y] coord pair of target position

    output: string of direction moved
    '''

    # move UP
    if agent[0] > target[0]:
        agent[0] -= 1
        path = 'UP'

    # move DOWN
    elif agent[0] < target[0]:
        agent[0] += 1
        path = 'DOWN'

    # move LEFT
    elif agent[1] > target[1]:
        agent[1] -= 1
        path = 'LEFT'

    # move RIGHT
    elif agent[1] < target[1]:
        agent[1] += 1
        path = 'RIGHT'
    
    return path

if __name__ == "__main__":
    pos = [int(i) for i in input().strip().split()]
    dim = [int(i) for i in input().strip().split()]
    board = [[j for j in input().strip()] for i in range(dim[0])]
    next_move(pos[0], pos[1], dim[0], dim[1], board)