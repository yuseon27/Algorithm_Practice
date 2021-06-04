def solution(gems) : #{
    answer = []
    len_set_gems = len(set(gems))   ## 보색의 종류의 개수
    len_gems     = len(gems)        ## 총 보석의 길이
    gems_dict = {gems[0]:1}         ## 현재 카트에 담긴 보석의 종류와 각 개수
    r_idx, l_idx = 0, 0             ## r_idx : 보석 하나씩 추가, l_idx : 보석 하나씩 제거
    distance, result = 0, 1

    while (r_idx < len_gems and l_idx < len_gems) : #{
        if len(gems_dict) < len_set_gems : #{  ## dictionary에 모든 값이 아직 들어오지 않은 경우
            r_idx += 1
            if r_idx == len_gems : break                                  ## 더 이상 보석을 추가할 수 없으면 멈춤
            gems_dict[gems[r_idx]] = gems_dict.get(gems[r_idx], 0) + 1    ## 보석의 종류에 해당하는 개수 1 증가
        #}
        else : #{  ## dictionary에 모든 값이 들어온 경우
            answer.append([r_idx-l_idx, [l_idx+1, r_idx+1]])              ## 길이, [시작, 끝인덱스] 저장
            gems_dict[gems[l_idx]] -= 1                                   ## 해당 보석 빼보기
            if gems_dict[gems[l_idx]] == 0 : del(gems_dict[gems[l_idx]])  ## 해당 보석의 개수가 0개이면 dictionary에서 삭제
            l_idx += 1
        #}    
    #}

    cand = sorted(answer, key=lambda x:(x[distance], x[result]))          ## 보석의 길이에 따라, 시작 값에 따라 정렬
    return cand[0][result]
#}

gems_list = [["DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA"], 
             ["AA", "AB", "AC", "AA", "AC"],
             ["XYZ", "XYZ", "XYZ"],
             ["ZZZ", "YYY", "NNNN", "YYY", "BBB"],
             ["DIA", "RUBY", "RUBY", "EMERALD", "SAPPHIRE", "DIA"], 
            ]

for g in gems_list :
    answer = solution(g)
    print(answer)
    # exit()

"""
["DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA"]	[3, 7]
["AA", "AB", "AC", "AA", "AC"]	[1, 3]
["XYZ", "XYZ", "XYZ"]	[1, 1]
["ZZZ", "YYY", "NNNN", "YYY", "BBB"]	[1, 5]
"""


"""
## 효율성 3개 시간 초과
def solution(gems):
    answer = [1, len(gems)]
    len_gems = len(set(gems))
    gems_dict = {}

    for idx, g in enumerate(gems) : #{
        if g in gems_dict : del(gems_dict[g])      ## 있으면 삭제
        gems_dict[g] = idx                         ## dictionary에 추가

        if len(gems_dict.keys()) == len_gems : #{  
            ## dictionary에 모든 값이 있으면, 최댓값과 최솟값을 구해서 길이가 더 짧은 경우 answer에 저장
            min_idx = list(gems_dict.values())[0]+1
            max_idx = list(gems_dict.values())[-1]+1
            
            if max_idx - min_idx < answer[1] - answer[0] :
                answer = [min_idx, max_idx]
        #}
    #}

    return answer
"""