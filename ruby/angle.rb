class Angle

   include Math
   attr_accessor :radians

   def initialize( radians )
        @radians = radians
   end

   def cosine
        res = cos(@radians)
        puts res
   end

end

Harry = Angle.new( 60 )
Harry.cosine