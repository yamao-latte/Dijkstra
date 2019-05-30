//------------------------------------------------------------
//
// Unique Array Library
//
//------------------------------------------------------------

#pragma once
#include <memory>
#include <iostream>

namespace asc {

	template<typename T>
	class unique_array_2d_XY {
	private:
		const size_t id;
		const std::unique_ptr<T[]>& t;
	public:
		constexpr unique_array_2d_XY<T>(const size_t id_, const std::unique_ptr<T[]>& t_)
			: id(id_), t(t_) {}
		constexpr T operator+() const { return +t[id]; }
		constexpr T operator-() const { return -t[id]; }
		constexpr T operator+(const T& a) const { return t[id] + a; }
		constexpr T operator-(const T& a) const { return t[id] - a; }
		constexpr T operator*(const T& a) const { return t[id] * a; }
		constexpr T operator/(const T& a) const { return t[id] / a; }
		constexpr T operator%(const T& a) const { return t[id] % a; }
		constexpr T operator&(const T& a) const { return t[id] & a; }
		constexpr T operator|(const T& a) const { return t[id] | a; }
		constexpr T operator^(const T& a) const { return t[id] ^ a; }
		constexpr T operator=(const T& a) const { return t[id] = a; }
		constexpr T operator+=(const T& a) const { return t[id] += a; }
		constexpr T operator-=(const T& a) const { return t[id] -= a; }
		constexpr T operator*=(const T& a) const { return t[id] *= a; }
		constexpr T operator/=(const T& a) const { return t[id] /= a; }
		constexpr T operator%=(const T& a) const { return t[id] %= a; }
		constexpr T operator^=(const T& a) const { return t[id] ^= a; }
		constexpr T operator|=(const T& a) const { return t[id] |= a; }
		constexpr T operator&=(const T& a) const { return t[id] &= a; }
		constexpr T operator++() const { return ++t[id]; }
		constexpr T operator++(int) const { return t[id]++; }
		constexpr T operator--() const { return --t[id]; }
		constexpr T operator--(int) const { return t[id]--; }
		constexpr const bool operator!() const { return !t[id]; }
		constexpr const bool operator&&(const T& a) const { return (t[id] && a); }
		constexpr const bool operator||(const T& a) const { return (t[id] || a); }
		constexpr const bool operator<(const T& a) const { return (t[id] < a); }
		constexpr const bool operator>(const T& a) const { return (t[id] > a); }
		constexpr const bool operator<=(const T& a) const { return (t[id] <= a); }
		constexpr const bool operator>=(const T& a) const { return (t[id] >= a); }
		constexpr const bool operator!=(const T& a) const { return (t[id] != a); }
		constexpr const bool operator==(const T& a) const { return (t[id] == a); }

		operator T() const { return t[id]; }

	};

	template<typename T>
	class unique_array_2d_X {
	private:
		const size_t id;
		const std::unique_ptr<T[]>& t;
	public:
		constexpr unique_array_2d_X<T>(const size_t id_, const std::unique_ptr<T[]>& t_) : id(id_), t(t_) {}
		 const unique_array_2d_XY<T> operator[](const size_t x_) const {
			const unique_array_2d_XY<T> uptr_xy(id + x_, t);
			return uptr_xy;
		}
		constexpr const unique_array_2d_XY<T> at(const size_t x_) const {
			const unique_array_2d_XY<T> uptr_xy(id + x_, t);
			return uptr_xy;
		}
		constexpr const unique_array_2d_XY<T> front() const {
			const unique_array_2d_XY<T> uptr_xy(id, t);
			return uptr_xy;
		}
	};

	template<typename T>
	class unique_array_2d {
	private:
		const std::unique_ptr<T[]> t;
		const size_t size_x, size_y;
	public:
		unique_array_2d<T>(const size_t y_, const size_t x_, const T value_)
			: t(new T[x_ * y_]), size_x((x_ == 0) ? 1 : x_), size_y((y_ == 0) ? 1 : y_) {
			const size_t xy = x_ * y_;
			for (T i = 0; i < xy; ++i) t[i] = value_;
		}
		constexpr unique_array_2d<T>(const size_t y_, const size_t x_)
			: t(new T[x_ * y_]), size_x((x_ == 0) ? 1 : x_), size_y((y_ == 0) ? 1 : y_) {}
		const unique_array_2d_X<T> operator[](const size_t y_) const {
			unique_array_2d_X<T> uptr_x(y_*size_x, t);
			return uptr_x;
		}
		constexpr const unique_array_2d_X<T> at(const size_t y_) const {
			unique_array_2d_X<T> uptr_x(y_*size_x, t);
			return uptr_x;
		}
		constexpr const unique_array_2d_X<T> front() const {
			unique_array_2d_X<T> uptr_x(0, t);
			return uptr_x;
		}
		std::unique_ptr<T[]> data() const { return t; }
		constexpr size_t size() const { return size_x * size_y; }
		constexpr size_t sizeX() const { return size_x; }
		constexpr size_t sizeY() const { return size_y; }

		constexpr T* operator&() const { return t.get(); }
		constexpr T* const get() const { return t.get(); }
		constexpr T* const begin() const { return t.get(); }
		constexpr T* const end() const { return t.get() + size_x * size_y; }

	};

}

