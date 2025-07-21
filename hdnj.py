print("🎓 First Year CGPA Calculator")

sem1_sgpa = float(input("Enter SGPA of Sem 1: "))
sem2_sgpa = float(input("Enter SGPA of Sem 2: "))

# Total credits for Sem 1 and Sem 2 (usually both are 20)
sem1_credits = 20
sem2_credits = 20

# CGPA Calculation
cgpa = (sem1_sgpa * sem1_credits + sem2_sgpa * sem2_credits) / (sem1_credits + sem2_credits)

print(f"\n✅ Your First Year CGPA is: {cgpa:.2f}")
