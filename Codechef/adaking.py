t=int(input())
while t>0:
    
    a=[[['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']] , [['.'],['.'],['.'],['.'],['.'],['.'],['.'],['.']]]
    
    n=int(input())
    a[3][3] = 'O'
    ra=3
    ca=3
    n=n-1
    
    while n > 0:
        r=ra+1 
        c=ca
        
        while r < 8:
             
            a[r][c] = 'ooo'
            r+=1 
            n-=1
            if n == 0:
                break
       
        if n > 0:
            r= ra -1
            c=ca
            while r>=0:
                 
                a[r][c] = 'ooo'
                r-=1
                n-=1
                if n==0:
                    break
        
        if n > 0:
            r=ra 
            c= ca + 1 
            while c < 8 :
                a[r][c] = 'ooo'
                c+=1 
                n-=1 
                
                if n == 0 :
                    break
        
        if n > 0:
            r=ra 
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                c-=1 
                n-=1 
                if n==0:
                  break
       
        if n > 0 :
            r=ra-1
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                c-=1 
                r-=1 
                n-=1
                if n==0:
                    break
        
        if n>0:
            r=ra+1 
            c=ca+1 
            while c<8:
                a[r][c]='ooo'
                c+=1 
                r+=1 
                n-=1
                if n ==0:
                    break
        
        if n>0:
            r=ra+1 
            c=ca-1
            while c>=0:
                a[r][c]='ooo'
                r+=1 
                c-=1 
                n-=1
                
                if n==0:
                    break
        
        if n>0:
            r=ra-1
            c=ca+1 
            while r>=0:
                a[r][c]='ooo'
               
                r-=1 
                c+=1
                n-=1
                if n==0:
                    break
        
        if n>0:
            
        
            r=0
            while r<8:
                c=0
                while c<8:
                    if a[r][c]!='ooo' :
                        if a[r][c]!='O':
                            
                            if n==0:
                                break
                            a[r][c]='ooo'
                            n-=1 
                            if n==0:
                                break
                    c+=1 
                r+=1
    i=0
    j=0
    while i<8:
        j=0
        while j<8:
            if a[i][j]==['.']:
                a[i][j] = 'X'
            j+=1 
        i+=1 
       
    i=0
    j=0
    while i<8:
        j=0
        while  j<8:
            if a[i][j]=='ooo':
                a[i][j]='.'
            j+=1 
        i+=1 
        
    for x in a:
        print(str(x).replace("'" , "").replace('[','').replace(']','').replace(',', "").replace(' ',''), end = '\n')
    t-=1 
    

