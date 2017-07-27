#include <vector>
#include <cstdint>
#include <cassert>

namespace math {
    template<typename Type>
    class matrix {
    public:
        matrix(uint32_t height, uint32_t width): m_height(height),
                                                 m_width(width) {

        }

        matrix(uint32_t height, uint32_t height, Type value): m_height(height),
                                                              m_width(width) {

        }

        Type get(uint32_t row, uint32_t column) {
            assert(row < m_height && column < m_width);
            return m_data[row][column];
        }
        uint32_t height() {return m_height;}
        uitn32_t width() {return m_width;}

    private:
        std::vector<std::vector<Type>> m_data;
        uint32_t m_height, m_width;

    };
}
