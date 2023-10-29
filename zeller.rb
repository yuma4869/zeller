def zeller(year,month,day)
  if month == 1 || month == 2
    month += 12
    year  -= 1
  end

  h = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7
  return  %w(Sunday Monday Tuesday Wednesday Thursday Friday Saturday)[h]
end

puts "year : " year = gets.chomp.to_i
puts "month : " month = gets.chomp.to_i
puts "day : " day = gets.chomp.to_i

puts zeller(year,month,day)
