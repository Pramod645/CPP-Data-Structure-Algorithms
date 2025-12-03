# Data-Structure-Algorithms
## 1a Foundations
### 1. An algorithm is any well defined computational procedure that takes some set of input values and produce some deterministics set of output values.

### 1.1 What is the difference between Algorithm and Program?
### Differences are as following
| Algorithm                              | Program                                   |
| -------------------------------------- | ----------------------------------------- |                       
| Design Phase or Design time            | Development Phase or Implemenetation Time |
| Domain Knowledge                       | Programmer                                |  
| Any Language(H/W & OS Indepenedent)    | Programming Language(H/W & OS Dependent)  |
| Analysis Algorithm                     | Testings                                  |

### 1.2 Priori Analysis & Posteriori Testing
| Priori Analysis                        | Posterioi Testing                         |
| -------------------------------------- | ----------------------------------------- |                       
| Algorithm                              | Program                                   |
| Indepenedent of Language               | Language Dependent                        |  
| H/W Independent                        | H/W Dependent                             |
| Time and Space Function                | WAtch Time & Watct                        |
| Tis is result of Analysis              | Run & Exceute the Program and also see the Memory |

### 1.2 Characterstics of Algorithm
1. Input   --> 0 or MOre
2. Output  --> Atlest One
3. Definitins --> Single &Exact Meaning!
4. finiteness  --> Algo should have finitness & should stop somewhere & should not be infinite
5. Effectiveness  --> don't write unnessesery step or don't do unnesseserly

### 1.3 How write & Analysis Algorithm 
    Algorithm swap (a, b)
        begin: 
            temp:= a;
            a:= b;
            b=: temp;
        end:

--> Don't botter about data type or specific things
--> Logic should be understandable




### How to Analysis an Algorithm?
1. Time --> This is most important creteria. It should be efficient. we should get time funtion
2. Space --> Need to know howmuch memory mechine going to consume
Other creteria should be considered but above two are must.
ex. N/W, Power consumptions, for Device Drivres or system level programming  --> CPU registers


### Time analysis
                Begin:
                        temp<- a:   -->1    single statement
                        a<= b: --> 1        take one unit of time
                        b<= temp: --> 1     take one unit of time
                end:
                        -----------------
                           f(n) = 3   --> fixed value funtion
#This can be analysis upto what level can be thing

Space analysis => space:
                  ------
                    a
                    b
                   temp
                  ------
                  s(n) = 3   --> constant space
                       = O(1)  --> order of one

### 1.4 Frequency count hodmet:

 Algorithm sum(A, B) // A:8,2,3,8,6
 {
    s = 0; // 1 (one unit of time)
    for(i =0; i< n; i++) // i<n: it will changes some time (n+1) time, i++ will ne n =5;
    s = s+ A[i];  // n time  ==> s:n times
 }
  time funtion f(n) = 2n + 3  // n+n+1+1+1
                    =2n +3

                    degree of polynomial 1   -> degree1
                    = O(n)
                    = order(n)



Algo add(A,B,C) // nxn its 3x3 matrix
{
    for(i=0;i<n; i++) // n+1
    {
        for(j=0; j<n; j++) // n
        C[i,j]=A[i,j]+B[i,j] ; //-> nxn
    }
}

f(n) = n+1+nxn(n+1) +nxn
    =2(n<sup>2</sup>)+2n+1
    =O(n<sup>2</sup>)

    space == a,b,c,n,i,j

 ### 1.5.1 Time complexity # 1

    1. for (i=0; i<n; i++)  //->execution time = n+1
    {
        statement;   // -> n  --->n/2 if i+2 f( n)=n/2
    }

    O(n)
------------------------------------------------------

    2. for(i=0;i<n; i++) //n+1
    {
        for(j=0; j<n; j++)
        {
            statement;
        }
    }

when i=0 then j is 0 // number of statement 0
when i=1 then j is 0 1 and 1 // number of stament 1
when i=2 then j is 0, 1 and 2 // number of statment 2
and so on


1+2+3 ---- + n = n(n+1)/2

f(n) = (n<sup>2</sup>) + 1
O(n2(n<sup>2</sup>))


------------------------------------------------------
    3
    p=0;
     for (i=1; p<=n; i++)
     {
        p=p+i;
     }
when i=1 then P is o+1 =1
when i=2 then p is 1+2 =3
when i=3 then p os 1+2+3
.
.
when i=k then p is 1+2+3+---+k
why k be 2 its not repeating n times

assume p>n
p = k(k+1)/2
k(k+1)/2 > n
(k<sup>2</sup>) > n
k = sqrt n
---------------------------------------------------------
4
for(i=1;i<n; i=ix2)
{
    statment;
}
i=1
i=1x2 =2
i=2x2 =2 to the power 2
i=2 to the power 2 x 2 = 2 the power 3
.
.
2 the power k


assume i=>n
i= 2 the power k
 2 the power k = n
 k =log2 n
 O(log2n)



### 1.5.3 The complexity of while & if


### 1.6 Class of funtions
    Type of Time funtions
|                  | Classes              |
| ---------------- | ---------------------|                       
| O(1)             | Constant             |
| O(logn)          | logrithemic          |  
| O(n)             | linear               |
| O(n<sup>2</sup>) | quadretic            |
| O(n<sup>3</sup>) | cubic                |
| O(2<sup>n</sup>) | exponential          |

    when f(n) = 2 or
         f(n) = 5 or
         f(n) = 50000
         these all have constant funtion O(1)

    when f(n) = 2n + 3 or
         f(n) = 555n + 700 or
         f(n) = $\ n devide 699 + 1
         these all have linear funtion O(n)


### 1.7 Compare classes of functions
1 < logn < root n < n < nlogn < n square < n qube --  <2 to the power n < 3 to the power n -- < n to the power n

|     log n        |       n              |         n square | 2 to the power n     |
| ---------------- | ---------------------|------------------|----------------------|                       
| 0                | 1                    |         1        | 2                    |
|log2 tothepower2=1| 2                    |   4              | 4                    |  
| 2                | 4                    |         16       | 16                   |
| 3                | 8                    |         64       | 256                  |

![FuntionsClasses](https://github.com/user-attachments/assets/8228eb10-46c8-4d74-954f-9615abac8937)
Image x and y plot for above functions

### 1.8.1 Asymptotic Notations big Oh - Omega - Theta
![aymptoticNotation1](https://github.com/user-attachments/assets/3c1886cd-2595-426a-a80c-6583a521af39)
![AymptoticNOtations2](https://github.com/user-attachments/assets/6e0bc72e-4a6b-4d6e-bf32-c553f7c7049a)
![asymptoticNotations3](https://github.com/user-attachments/assets/f81063c2-27b6-4583-a13c-ed9c01293dac)


### 1.9 Properties of Aysmptetics notations
![PrppertiesOfAymptoticNotations](https://github.com/user-attachments/assets/d29cd7aa-f9f0-4d35-a6e3-9f024e4b5c0e)


### 1.10.1 Comparision of Funtion
![comp](https://github.com/user-attachments/assets/099fa844-4979-4c49-b0b9-ff72f0c9b429)


![fn1](https://github.com/user-attachments/assets/429a83ee-d310-4a24-b64b-f5af4e816e91)
### 1.10.2 funtions
![fn1](https://github.com/user-attachments/assets/f4e915a7-27fb-455e-912f-07faad17fc02)
![fn2](https://github.com/user-attachments/assets/fc04b7b2-b928-4074-843c-0b07e44d9a37)

### 1. 11 Best worst & Average Case Analysis
![BestWorstAverage](https://github.com/user-attachments/assets/4d6b5217-02a4-4059-93c4-f0705f45e3c0)

### 1.12 Disjoint Set Data Structure - Weighted Union and collapsing find

## 1b Physical Data Structure


## 2 Sorting and Order Statics 

## 3 Data Structures 


## 4 Advanced Design and Analysis Techniques 


## 5 Advanced Data structure 


## 6 Graph Algorithms 

## 7 Optimized Yechniques

## 8 Mathmetics 


