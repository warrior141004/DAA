import time

def traffic_signal(vehicle_count):
    # Fixed timings
    fixed_green = 30  # seconds
    yellow_time = 5   # seconds
    red_time = 30     # seconds
    
    # Adjust timings
    clearance_time = 5
    emr_clearance_time=10  # time to clear one vehicle
    if vehicle_count > 5:  # High traffic
        green_time = fixed_green
    
    # elif emr_vehicle>=1:
    #     green_time= max(10, emr_clearance_time * vehicle_count) 

    else:  # Low traffic
        green_time = max(10, clearance_time * vehicle_count)    
    
    # Simulate traffic signal
    print("Green Light ON for", green_time, "seconds")
    time.sleep(green_time)
    print("Yellow Light ON for", yellow_time, "seconds")
    time.sleep(yellow_time)
    print("Red Light ON for", red_time, "seconds")
    time.sleep(red_time)

def main():
    while True:
        # Simulate vehicle count input
        try:
            vehicle_count = int(input("Enter number of vehicles detected: "))
            traffic_signal(vehicle_count)
        except ValueError:
            print("Please enter a valid number.")

if __name__ == "__main__":
    main()
