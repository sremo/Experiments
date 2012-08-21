

num2char = {}
num2char[0] = ['0']
num2char[1] = ['1']
num2char[2] = ['A','B','C']
num2char[3] = ['D','E','F']
num2char[4] = ['G', 'H', 'I']
num2char[5] = ['J', 'K', 'L']
num2char[6] = ['M', 'N', 'O']
num2char[7] = ['P', 'Q', 'R', 'S']
num2char[8] = ['T', 'U', 'V']
num2char[9] = ['W', 'X', 'Y', 'Z']

def phonenumber2string(phone_number):
    result = []
    if len(phone_number) > 1:
        fst_numb = num2char[phone_number[0]]
        rest_char = phonenumber2string(phone_number[1::])
        for fst in fst_numb:
            for nm in rest_char:
                tmp_numb = fst + nm
                result.append(tmp_numb)
    elif len(phone_number) == 1:
        fst_numb = num2char[phone_number[0]]
        for fst in fst_numb:
            result.append(fst)
    return result
         

def test_func():
    return [10, 10,10]
