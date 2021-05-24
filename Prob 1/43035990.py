T=1
i=1
while i<=T:
    H=float(input("Enter your height (in m):"))
    M=float(input("Enter your weight (in kgs):"))
    BMI = M/(H*H)
    print("Your BMI is:",round(BMI))
    if (BMI <=18):
        print("underweight")
    elif (BMI>18) and (BMI<=24):
        print("Normal weight") 
    elif (BMI>24) and (BMI<=29):
        print("Overweight")
    else:
        print("obesity")
    i=i+1