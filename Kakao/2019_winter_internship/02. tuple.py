import ast
def solution(s):
    answer = []
    
    # Make string input as list
    strs = ast.literal_eval(s.replace('{', '[').replace('}', ']'))
    strs = sorted(strs, key=len)  # Sort list by length
    
    # 길이가 짧은 것부터 보면서 answer에 없는 값 추가하기
    for ss in strs : #{
        for t in ss : #{
            if t not in answer : 
                answer.append(t)
        #}    
    #}
    
    return answer