total=float(input())
if total-1000>=0:
    print("%.2f"%(total-300))
elif total-1000<0 and total-500>=0:
    print("%.2f"%(total-100)
elif total-500<0 and total-300>=0:
    print("%.2f"%(total-50))
else:
    print("%.2f"%total)    