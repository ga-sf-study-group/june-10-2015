text = "Consequatur delectus aliquam qui inventore est vitae voluptatem. Qui sapiente aut nesciunt illo. Rerum autem porro ut velit. Sit dolor velit sit aut. Ex odit voluptatum molestias voluptate reprehenderit ipsam earum. Sequi dolor quia dignissimos et vero ipsum minima maxime. Dolor magnam adipisci qui et libero laudantium reprehenderit. Doloremque sint dolores reprehenderit error minima. Apple Apple apple apples apple apple apple apple."


def remove_period_and_downcase(string)
  string = string.gsub(/\./, '').downcase
end

def split_words_to_array(string)
  arr = string.split(/\s/)
end

def word_is_not_unique?(hash, word)
  hash.has_key?(word)
end



cleanText = remove_period_and_downcase(text)
allWords = split_words_to_array(cleanText)

uniqueWords = {}

allWords.each do |word|
  symWord = word.to_sym
  if word_is_not_unique?(uniqueWords, symWord)
    #find the word in the hash and increment the value
    uniqueWords[symWord] += 1
  else
    #add the word to the hash and give it a value 1
    uniqueWords[symWord] = 1
  end

end

p uniqueWords


