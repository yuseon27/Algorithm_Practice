def solution(board, moves):
    answer = 0
    bucket = []
    max_depth = len(board)

    # 칸을 움직이면서
    for m in moves : #{
        for i in range(max_depth) : #{        # 세로 줄을 돌면서
            if board[i][m-1] != 0 : #{        # 칸이 0이 아닌 값이면
                bucket.append(board[i][m-1])  # 바구니에 0이 아닌 값 추가
                board[i][m-1] = 0             # 보드에 해당 칸 0으로 바꾸기

                # 바구니에 마지막 2개가 같으면 바구니에서 삭제, answer에 2 더하기
                if len(bucket) > 1 and bucket[-1] == bucket[-2] : #{  
                    del(bucket[-2:])    
                    answer += 2
                #}
                break   # 해당 칸을 봤으므로 다음칸으로!
            #}    
        #}
    return answer
#}

board = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
moves = [1, 5, 3, 5, 1 ,2, 1, 4]
result = 4

print(solution(board, moves))

"""
# 1st solution
def solution(board, moves):
    answer = 0
    bucket = []
    max_depth = len(board)

    for m in moves : #{
        i = 0
        while(i < max_depth and board[i][m-1] == 0) : #{
            i += 1
        #}
        
        if i >= max_depth : continue

        if len(bucket) != 0 : #{
            top = bucket[-1]
            cur = board[i][m-1]

            if top == cur : #{
                del(bucket[-1])
                answer += 2
            #}
            else : #{
                bucket.append(cur)
            #}
            board[i][m-1] = 0
        #}
        else : #{
            bucket.append(board[i][m-1])    
            board[i][m-1] = 0
        #}
    #}
    return answer
#}
"""
