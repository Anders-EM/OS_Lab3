cd ../src

# Obtain input values

read -p "Number of consumers:" number_consumers
read -p "Number of producers:" number_producers
read -p "Buffer size:" buffer_size
read -p "Number of the test file: " filenumber



# START TESTING THE SPECIFIED FILE WITH SPECIFIED VALUES:
echo -e "\n \n OUTPUT \n ################## \n\n"
./store_manager testfiles/file$filenumber.txt $number_producers $number_consumers $buffer_size


