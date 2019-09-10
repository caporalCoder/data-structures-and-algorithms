


numbers = "0123456789"
lower_case = "abcdefghijklmnopqrstuvwxyz"
upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
special_characters = "!@#$%^&*()-+"

if __name__ == "__main__":
    n = int(input())
    str1 = input()

    cpt = [0, 0, 0 , 0]
    it = 0
    for c in str1:
        it += 1
        if c >= '0' and c <= '9':
            cpt[0] +=1
            continue

        if c >= 'a' and c <= 'z':
            cpt[1] +=1
            continue

        if c >= 'A' and c <= 'Z':
            cpt[2] +=1
            continue

        if c in special_characters:
            cpt[3] +=1
            continue
        
        if cpt[0] > 0 and cpt [1] > 0 and cpt[2] > 0 and cpt[3] > 0:
            break

    if cpt[0] > 0 and cpt [1] > 0 and cpt[2] > 0 and cpt[3] > 0 and len(str1) >= 6:
        print(0)
    elif cpt[0] > 0 and cpt [1] > 0 and cpt[2] > 0 and cpt[3] > 0 and len(str1) < 6:
        print(6 - it)
    else:
        k = 0
        tt = 0
        for item in cpt:
            tt += item
            if item == 0:
                k += 1

        if (tt + k) >= 6:
            print(k)
        else:
            print(k + (6 - (tt + k )))

        
    


