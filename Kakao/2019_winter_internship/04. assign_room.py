def solution(k, room_number) : #{
    answer     = []
    next_rooms = {}

    for r in room_number : #{
        new_r = r
        route = [new_r]
        while (new_r in next_rooms) : #{
            new_r = next_rooms[new_r]
            route.append(new_r)
        #}
        answer.append(new_r)

        for r in route : #{
            next_rooms[r] = new_r+1
        #}
    #}
    return answer
#}


k = 10
room_number = [1, 3, 4, 1, 3, 1]

result = solution(k, room_number)
print(result)


"""
# 효율성 고려 안함 1
def solution(k, room_number): #{
    answer = []

    rooms = [True for i in range(k+1)]

    for r in room_number : #{
        if rooms[r] : #{  ## 방이 비어 있으면
            answer.append(r)
            rooms[r] = False
        #}
        else : #{ ## 방이 이미 찼으면, 큰 번호 중 가장 작은 방 번호로 배정
            for idx, avail in enumerate(rooms[r+1:]) :
                if avail : #{
                    answer.append(r+1+idx)
                    rooms[r+1+idx] = False
                    break 
                #}
        #}
    #}

    return answer
#}

# 효율성 고려 안함 2
def solution(k, room_number): #{
    answer = []

    avail_rooms = [i+1 for i in range(k+1)]

    for r in room_number : #{
        if r in avail_rooms : #{  ## 방이 비어 있으면
            answer.append(r)
            avail_rooms.remove(r)
        #}
        else : #{ ## 방이 이미 찼으면, 큰 번호 중 가장 작은 방 번호로 배정
            for a in avail_rooms : #{
                if a > r : #{
                    answer.append(a)
                    avail_rooms.remove(a)
                    break    
                #}    
            #}
        #}
        print(r, avail_rooms)
    #}

    return answer
#}

"""