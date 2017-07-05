# This does not work it is fucked
require "http/server"

HTTP::Server.new(8000) do | context |
Time.now

puts "Listening on http://127.0.0.1:8000"

end


#server.listen
