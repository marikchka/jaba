word.erase(std::remove_if(word.begin(), word.end(), [](char c) {
            //     return std::ispunct(c);
            // }), word.end());