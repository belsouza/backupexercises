{-# LANGUAGE FlexibleInstances #-}

class Listable a where
  toList :: a -> [Int]
  
-- show
data Tree a = Empty | Node a (Tree a) (Tree a)

instance Listable (Tree Int) where
  toList Empty        = []
  toList (Node x l r) = toList l ++ [x] ++ toList r

myTree :: Tree Int
myTree = Node 1 (Node 2 Empty (Node 3 Empty Empty)) (Node 4 Empty Empty)

main = print (toList myTree)