def solution(board):     # (y, x)

    len_board = len(board)
    dirs = [(-1, 0), (1,0), (0,-1), (0,1)]

    queue = []
    route = [[float('inf') for i in range(len_board)] for j in range(len_board)]   # (y, x)
    route[0][0] = 0
    queue.append([0, 0, (0,0), 0])  # (y, x, dir, cost)

    while(queue) : #{
        cur = queue.pop(0)  # (y, x, dir, cost)

        for d in dirs : #{  # 4개의 방향 돌면서
            # 다음 칸 좌표
            new_y = cur[0]+d[0]
            new_x = cur[1]+d[1]

            # 다음 칸이 유효한 지 확인 : 범위 확인 및 board에서 벽인지 확인
            if new_y == -1 or new_y == len_board or new_x == -1 or new_x == len_board : continue
            if board[new_y][new_x] == 1 : continue

            # 새로운 cost 계산 : 같은 방향이면 +100, 아니면 +600
            add_v = 100 if cur[2] == d or cur[2] == (0, 0) else 600
            new_cost = cur[3] + add_v   # 현재 좌표에서의 cost + 새로 움직일 때의 cost
            # 새로운 cost가 route보다 작으면 큐에 추가, route[y][x] 업데이트
            if new_cost <= route[new_y][new_x] : #{   
                queue.append([new_y, new_x, d, new_cost])
                route[new_y][new_x] = new_cost                
            #}
        #}    

    return route[len_board-1][len_board-1]
#}

board_list = [
    [[0,0,0],[0,0,0],[0,0,0]], #	900
    [[0,0,0,0,0,0,0,1],[0,0,0,0,0,0,0,0],[0,0,0,0,0,1,0,0],[0,0,0,0,1,0,0,0],[0,0,0,1,0,0,0,1],[0,0,1,0,0,0,1,0],[0,1,0,0,0,1,0,0],[1,0,0,0,0,0,0,0]], #	3800
    [[0,0,1,0],[0,0,0,0],[0,1,0,1],[1,0,0,0]], #	2100
    [[0,0,0,0,0,0],[0,1,1,1,1,0],[0,0,1,0,0,0],[1,0,0,1,0,1],[0,1,0,0,0,1],[0,0,0,0,0,0]], #	3200
    [[0, 0, 0, 0, 0], [0, 1, 1, 1, 0], [0, 0, 1, 0, 0], [1, 0, 0, 0, 1], [0, 1, 1, 0, 0]], #   3000, 3300
]

for b in board_list : #{
    answer = solution(b)    
    print(answer)
#}