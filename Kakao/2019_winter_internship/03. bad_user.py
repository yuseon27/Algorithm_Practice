# https://programmers.co.kr/learn/courses/30/lessons/64064
import re
from itertools import product

def solution(user_id, banned_id): #{
    possible_id  = [] 

    # banned_id에 적합한 user_id를 possible_id에 저장
    for b_id in banned_id : #{
        re_b_id = b_id.replace('*', '\w')
        id_list = []

        for u_id in user_id : #{
            if re.match(re_b_id, u_id) and len(b_id) == len(u_id) : 
                id_list.append(u_id)  

        possible_id.append(id_list)
    #}

    # possible_id들의 조합
    dup_options = list(product(*possible_id))

    # 하나의 set에서 id가 중복된 경우 제거, 전체 option에서 중복 제거 - 정렬을 통해
    options = []
    for op in dup_options : #{
        if len(op) == len(set(op)) and sorted(op) not in options: 
            options.append(sorted(op))
    #}

    return len(options)
#}

user_id = [
    ["frodo", "fradi", "crodo", "abc123", "frodoc"],
    ["frodo", "fradi", "crodo", "abc123", "frodoc"],
    ["frodo", "fradi", "crodo", "abc123", "frodoc"],
]

banned_id = [
    ["fr*d*", "abc1**"],
    ["*rodo", "*rodo", "******"],
    ["fr*d*", "*rodo", "******", "******"],
]

for u, b in zip(user_id, banned_id) :
    result = solution(u, b)
    print(result)
    # break