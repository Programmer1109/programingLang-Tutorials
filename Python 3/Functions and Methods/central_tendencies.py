import math as algebra


def mean(Set):
    total = 0
    len_set = len(Set)
    mean_val = 0 
    for n in range(len_set):
        total = total + Set[n]
    mean_val = total/float(len_set)
    print(f"Mean = {mean_val}")
    return mean_val


def median(Set):
    if (len(Set) % 2) != 0:
        n = (len(Set) + 1) // 2
        print(f"Median = {Set[n - 1]} ")
        return Set[n-1]
    elif (len(Set) % 2) == 0:
        n = len(Set) // 2
        print(f"Median = {(Set[n - 1] + Set[n]) / 2} ")
        return ((Set[n - 1] + Set[n]) / 2)


def mode(Set):
    order_set = []
    cnt = []
    n = 0
    j = 0
    while j < len(Set) - 1:
        if Set[j] != Set[j + 1]:
            cnt.append(Set.count(Set[j]))
            order_set.append(Set[j])
        j = j + 1
    cnt.append(Set.count(Set[len(Set) - 1]))
    order_set.append(Set[len(Set) - 1])
    # print(f"ordered set= {order_set}")
    # print(f"cnt= {cnt}")
    j = 1
    max_count = cnt[0]
    while j < len(cnt) - 1:
        if cnt[j] >= max_count:
            max_count = cnt[j]
            n = j
        j = j + 1

    max_value = order_set[n]
    print(f"Mode = {max_value}")


def var(Set):
    variance = []
    mew = mean(Set)
    total = 0
    for n in range(0, len(Set)):
        # print(f"n= {n}")
        variance.append(algebra.pow((Set[n] - mew), 2))
        total = total + variance[n]

    print(f"Variance= {total / (len(Set) - 1)}")
    return total / (len(Set) - 1)


def stdDeviation(Set):
    deviation = algebra.sqrt(var(Set))
    print(f"Standard Deviation= {deviation}")


def percentile(Set):
    p = int(input("\nEnter the percentile to be calculated:"))
    ile = (p * len(Set)) / 100
    if (ile - algebra.floor(ile)) == 0:
        print(f"\nPercentile= {Set[ile]}")
    else:
        ile = algebra.floor(ile + 1)
        print(f"\nPercentile= {Set[ile]}")


def coVar(Set1, Set2):
    set1mean = mean(Set1)
    set2mean = mean(Set2)
    if len(Set1) == len(Set2):
        Sum = 0
        for count in range(len(Set1)):
            term1 = Set1[count] - set1mean
            term2 = Set2[count] - set2mean
            Sum = Sum + term1 * term2
        return Sum / (len(Set1) - 1)
    else:
        print("Co-Variance of the two input sets are not computable. The covariance is computed on the assumption "
              "that every element in Set1 is mapped to an element in Set2.")
        return -1


def coRelation(Xi, Yi):
    Xm = mean(Xi)
    Ym = mean(Yi)
    if len(Xi) == len(Yi):
        numerator = 0
        denominator = 0
        for index in range(len(Xi) - 1):
            Xi[index] = Xi[index] - Xm
            Yi[index] = Yi[index] - Ym
            numerator = numerator + Xi[index] * Yi[index]
            denominator = algebra.sqrt(denominator + pow(Xi[index], 2) * pow(Yi[index], 2))
        coRelation_Coefficient = numerator / denominator
        return coRelation_Coefficient
    else:
        return 0


# class Forecasting:
groupedData = input("Enter 'y' if grouped data or 'n' if ungrouped data: ")
if groupedData.upper() == 'N':
    dataStr1 = input(f"Enter data set1: ")
    dataStr1 = dataStr1.split(",")
    dataA = []
    dataStr2 = input(f"Enter data set2: ")
    dataStr2 = dataStr2.split(",")
    dataB = []
    for i in range(0, len(dataStr1)):
        dataA.append(float(dataStr1[i]))
        dataB.append(float(dataStr2[i]))

    dataA.sort()
    dataB.sort()
    # print(f"Entered data in sorted format: {data}\n")
    x = mean(dataA)
    median(dataA)
    mode(dataA)
    y = var(dataA)
    stdDeviation(dataA)
    percentile(dataA)
    res = coVar(dataA, dataB)
    result = coRelation(dataA, dataB)
    if 0 <= result <= 1:
        if result < 0:
            print("The entered sets x and y vary together inversely.")
        elif result > 0:
            print("The entered sets x and y vary together directly.")
        elif result == 0:
            print("The entered sets do not vary together.")

else:
    print("Extremely sorry!! this program cannot process grouped data.")
