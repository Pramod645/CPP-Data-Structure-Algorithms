# Data-Structure-Algorithms
### An algorithm is any well defined computational procedure that takes some set of input values and produce some deterministics set of output values.

### What is the difference between Algorithm and Program?
### Differences are as following
| Algorithm                              | Program                                   |
| -------------------------------------- | ----------------------------------------- |                       
| Design Phase or Design time            | Development Phase or Implemenetation Time |
| Domain Knowledge                       | Programmer                                |  
| Any Language(H/W & OS Indepenedent)    | Programming Language(H/W & OS Dependent)  |
| Analysis Algorithm                     | Testings                                  |

### Priori Analysis & Posteriori Testing
| Priori Analysis                        | Posterioi Testing                         |
| -------------------------------------- | ----------------------------------------- |                       
| Algorithm                              | Program                                   |
| Indepenedent of Language               | Language Dependent                        |  
| H/W Independent                        | H/W Dependent                             |
| Time and Space Function                | WAtch Time & Watct                        |
| Tis is result of Analysis              | Run & Exceute the Program and also see the Memory |

### Characterstics of Algorithm
1. Input   --> 0 or MOre
2. Output  --> Atlest One
3. Definitins --> Single &Exact Meaning!
4. finiteness  --> Algo should have finitness & should stop somewhere & should not be infinite
5. Effectiveness  --> don't write unnessesery step or don't do unnesseserly

### How write & Analysis Algorithm 
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


Time analysis => Begin:
                        temp<- a:   -->1    single statement
                        a<= b: --> 1        take one unit of time
                        b<= temp: --> 1     take one unit of time
                end:
                        -----------------
                           f(n) = 3   --> fixed value funtion
#This can be analysis upto what level can be thing

Space analysis =>:
                space:
                ------:
                  a
                  b
                  temp
                ------:
                s(n) = 3   --> constant space
                     = O(1)  // order of one

### Frequency count method:
![Screeshot of  frequency count methos]
../FrequencyCountMethod.JPG